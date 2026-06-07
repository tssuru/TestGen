try:
    def f():
        try:
            res = int("7")
        except ZeroDivisionError: 
            return 2
        except Exception: 
            return 5
        else: return 30
        return res
    
    print(f())
except: print('error')
