try:
    def f():
        try:
            res = int(6%0)
        except ZeroDivisionError: return 4
        except Exception: return 3
        else: return 33
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
