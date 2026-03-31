const card = document.querySelector('.card');

// Add an event listener to flip the card on click
card.addEventListener('click', () => {
    card.classList.toggle('is-flipped');
});
