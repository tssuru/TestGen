try:
    def f():
        try:
            res = int(6/1)
            return 43
        except ZeroDivisionError: return 8
        except KeyboardInterrupt: return 2
        return res
    
    print(f())
    
except: print('error')
