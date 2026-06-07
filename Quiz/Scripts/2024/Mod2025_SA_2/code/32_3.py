try:
    def f():
        try:
            res = int(8//0)
        except ZeroDivisionError: 
            return 2
        except Exception: 
            return 0
        finally: return 24
        return res
    
    print(f())
except: print('error')
