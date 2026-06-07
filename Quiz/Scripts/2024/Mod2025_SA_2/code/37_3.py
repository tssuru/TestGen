try:
    def f():
        try:
            res = int(3%2)
        except ZeroDivisionError: 
            return 9
        except KeyboardInterrupt: 
            return 0
        else: return 35
        return res
    
    print(f())
except: print('error')
