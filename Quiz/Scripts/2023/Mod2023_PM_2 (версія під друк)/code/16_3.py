try:
    def f():
        try:
            res = int(1/0.0)
        except ZeroDivisionError: return 4
        except TypeError: return 9
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
