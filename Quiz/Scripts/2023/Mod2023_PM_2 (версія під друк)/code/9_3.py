try:
    def f():
        try:
            res = int(6%0.0)
        except ValueError: return 1
        except ZeroDivisionError: return 8
        return res
    
    print(f())
    
except: print('error')
