try:
    def f():
        try:
            res = 5>7
            return 45
        except Exception: return 4
        except ZeroDivisionError: return 1
        else: return 31
        return res
    
    print(f())
    
except: print('error')
