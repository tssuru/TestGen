try:
    def f():
        try:
            res = 0==4
        except ValueError: return 8
        except TypeError: return 3
        else: return 34
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
