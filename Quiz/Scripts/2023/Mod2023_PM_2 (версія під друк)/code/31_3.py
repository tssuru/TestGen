try:
    def f():
        try:
            res = int("7")
            return 45
        except ZeroDivisionError: return 6
        except Exception: return 4
        else: return 32
        return res
    
    print(f())
    
except: print('error')
