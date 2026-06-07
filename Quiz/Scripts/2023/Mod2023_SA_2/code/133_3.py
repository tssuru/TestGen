try:
    def f():
        try:
            res = 8==2
            return 44
        except ValueError: return 1
        except TypeError: return 3
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
