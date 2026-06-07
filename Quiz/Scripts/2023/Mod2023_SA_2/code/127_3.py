try:
    def f():
        try:
            res = 7!=6
        except Exception: return 0
        except ZeroDivisionError: return 5
        else: return 32
        return res
    
    print(f())
    
except: print('error')
