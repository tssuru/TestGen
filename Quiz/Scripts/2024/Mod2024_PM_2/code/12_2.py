try:
    def f():
        try:
            res = int(0/0.0)
        except Exception: return 5
        except ZeroDivisionError: return 4
        else: return 35
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
