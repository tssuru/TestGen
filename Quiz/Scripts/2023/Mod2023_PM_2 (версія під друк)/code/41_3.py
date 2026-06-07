try:
    def f():
        try:
            res = int(8/0)
            return 43
        except ValueError: return 2
        except KeyboardInterrupt: return 0
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
