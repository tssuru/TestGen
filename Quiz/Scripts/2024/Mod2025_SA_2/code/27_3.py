try:
    def f():
        try:
            res = int(1//2)
        except KeyboardInterrupt: 
            return 8
        except BaseException: 
            return 7
        else: return 32
        return res
    
    print(f())
except: print('error')
