try:
    def f():
        try:
            res = int("c8")
        except Exception: return 0
        except ZeroDivisionError: return 3
        return res
    
    print(f())
    
except: print('error')
