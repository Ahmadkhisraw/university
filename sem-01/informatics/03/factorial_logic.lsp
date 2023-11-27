(defun factorial (x)
  (if (= x 0)
      1
      (* x (factorial (- x 1)))))

;; Example usage
(let ((x 5))
  (format t "The factorial of ~a is: ~a~%" x (factorial x)))
