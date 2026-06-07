try:
    def f():
        try:
            res = int(1//1)
            return 43
        except TypeError: return 9
        except KeyboardInterrupt: return 5
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
