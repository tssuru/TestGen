try:
    def f():
        try:
            res = int(1%1)
        except ZeroDivisionError: return 9
        except Exception: return 2
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
