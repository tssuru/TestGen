try:
    def f():
        try:
            res = int(5//1)
            return 40
        except BaseException: return 4
        except KeyboardInterrupt: return 0
        else: return 35
        return res
    
    print(f())
    
except: print('error')
