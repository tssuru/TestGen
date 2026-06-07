try:
    def f():
        try:
            res = int("9")
        except ValueError: return 1
        except ZeroDivisionError: return 4
        else: return 32
        return res
    
    print(f())
    
except: print('error')
