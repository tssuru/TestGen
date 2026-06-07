try:
    def f():
        try:
            res = int("c2")
        except Exception: return 0
        except ZeroDivisionError: return 3
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
