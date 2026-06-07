try:
    def f():
        try:
            res = int(0//2)
        except ZeroDivisionError: return 4
        except TypeError: return 0
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
