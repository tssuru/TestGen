try:
    def f():
        try:
            res = int(8/0.0)
        except ZeroDivisionError: return 6
        except Exception: return 1
        return res
    
    print(f())
    
except: print('error')
