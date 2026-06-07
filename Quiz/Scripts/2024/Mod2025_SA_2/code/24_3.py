try:
    def f():
        try:
            res = int(8/1)
        except Exception: 
            return 3
        except ZeroDivisionError: 
            return 9
        else: return 34
        finally: return 25
        return res
    
    print(f())
except: print('error')
