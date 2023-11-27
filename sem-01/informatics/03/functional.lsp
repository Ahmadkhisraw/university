(defun find-common-age (ages-x ages-y)
  (if (equal ages-x ages-y)
      (car ages-x)
      nil))

;; Example usage
(setq ages-x '(25 30 25 40))
(setq ages-y '(25 30 25 40))

(let ((common-age (find-common-age ages-x ages-y)))
  (if common-age
      (format t "The common age is: ~a~%" common-age)
      (format t "Persons have different ages.~%")))