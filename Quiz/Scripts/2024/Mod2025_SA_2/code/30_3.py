try:
    def f():
        try:
            res = int(4%0)
            return 44
        except ZeroDivisionError: 
            return 2
        except KeyboardInterrupt: 
            return 9
        return res
    
    print(f())
except: print('error')
