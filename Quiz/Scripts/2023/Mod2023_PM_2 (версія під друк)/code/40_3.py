try:
    def f():
        try:
            res = int(2%0)
            return 44
        except Exception: return 6
        except ZeroDivisionError: return 3
        return res
    
    print(f())
    
except: print('error')
