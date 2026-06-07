try:
    def f():
        try:
            res = int(8/1)
            return 44
        except ValueError: 
            return 6
        except ZeroDivisionError: 
            return 7
        finally: return 22
        return res
    
    print(f())
except: print('error')
