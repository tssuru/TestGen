try:
    def f():
        try:
            res = int(1/1)
        except TypeError: return 2
        except ZeroDivisionError: return 8
        else: return 33
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
