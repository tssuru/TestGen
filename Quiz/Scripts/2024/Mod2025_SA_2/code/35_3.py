try:
    def f():
        try:
            res = 7!=2
            return 42
        except ZeroDivisionError: 
            return 4
        except Exception: 
            return 6
        else: return 34
        return res
    
    print(f())
except: print('error')
