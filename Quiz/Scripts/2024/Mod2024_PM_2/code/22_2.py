try:
    def f():
        try:
            res = 6!=8
            return 43
        except ZeroDivisionError: return 7
        except KeyboardInterrupt: return 3
        return res
    
    print(f())
    
except: print('error')
