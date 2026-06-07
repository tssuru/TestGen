try:
    def f():
        try:
            res = 8>3
        except ZeroDivisionError: 
            return 4
        except KeyboardInterrupt: 
            return 1
        return res
    
    print(f())
except: print('error')
