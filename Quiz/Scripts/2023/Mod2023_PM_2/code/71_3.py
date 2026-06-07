try:
    def f():
        try:
            res = int(5//2)
            return 44
        except BaseException: return 7
        except KeyboardInterrupt: return 0
        return res
    
    print(f())
    
except: print('error')
