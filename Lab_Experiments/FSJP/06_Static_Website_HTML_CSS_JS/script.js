function executeStaticBooking() {
    const firstName = document.getElementById("firstName").value.trim();
    const lastName = document.getElementById("lastName").value.trim();
    const targetDate = document.getElementById("appointmentDate").value;
    const department = document.getElementById("specialty").value;
    const alertBox = document.getElementById("submissionMessage");
    if (!firstName || !lastName || !targetDate) {
        alert("Validation Error: Please fill out the required First Name, Last Name, and Preferred Date fields.");
        return;
    }
    localStorage.setItem("newPatientName", `${firstName} ${lastName}`);
    localStorage.setItem("newPatientDept", department);
    alertBox.className = "hidden-alert success-alert";
    alertBox.textContent = `Token Registered Successfully for ${firstName} ${lastName}. Sending to Live Queue...`;
    setTimeout(function() {
        window.location.href = "staff_dashboard.html";
    }, 1800);
}
document.addEventListener("DOMContentLoaded", function () {
    const clockElement = document.getElementById("liveClock");
    if (clockElement) {
        setInterval(function() {
            const now = new Date();
            clockElement.textContent = `Live System Time: ${now.toLocaleDateString('en-IN')} | ${now.toLocaleTimeString('en-IN')}`;
        }, 1000);
    }
    const loginForm = document.getElementById("loginForm");
    if (loginForm) {
        loginForm.addEventListener("submit", function (event) {
            const email = document.getElementById("email").value.trim();
            const password = document.getElementById("password").value.trim();
            if (email === "" || password === "") {
                event.preventDefault();
                alert("Security Error: Please provide structural inputs for all credentials fields.");
            }
        });
    }
    const tableBody = document.querySelector(".data-table tbody");
    const storedName = localStorage.getItem("newPatientName");
    if (tableBody && storedName) {
        const storedDept = localStorage.getItem("newPatientDept");
        const nextTokenIndex = tableBody.querySelectorAll("tr").length + 14;
        const newRow = document.createElement("tr");
        newRow.innerHTML = `
            <td><strong>OPD-0${nextTokenIndex}</strong></td>
            <td><strong>${storedName}</strong></td>
            <td>${storedDept} Unit</td>
            <td>Dr. Iyer</td>
            <td><span class="badge badge-pending">High Priority</span></td>
        `;
        tableBody.appendChild(newRow);
        const totalPatientsNode = document.getElementById("totalPatientsCount");
        const pendingNode = document.getElementById("pendingCount");
        if (totalPatientsNode) {
            totalPatientsNode.textContent = parseInt(totalPatientsNode.textContent, 10) + 1;
        }
        if (pendingNode) {
            pendingNode.textContent = parseInt(pendingNode.textContent, 10) + 1;
        }
        localStorage.removeItem("newPatientName");
        localStorage.removeItem("newPatientDept");
    }
});
