try:
    def f():
        try:
            res = int("c5")
            return 40
        except ZeroDivisionError: return 8
        except Exception: return 2
        else: return 30
        return res
    
    print(f())
    
except: print('error')
