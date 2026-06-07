try:
    def f():
        try:
            res = int(4//2)
            return 45
        except KeyboardInterrupt: 
            return 3
        except TypeError: 
            return 6
        return res
    
    print(f())
except: print('error')
