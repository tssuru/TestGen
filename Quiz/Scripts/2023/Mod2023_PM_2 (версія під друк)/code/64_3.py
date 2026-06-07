try:
    def f():
        try:
            res = 3<=0
        except ValueError: return 6
        except TypeError: return 3
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
