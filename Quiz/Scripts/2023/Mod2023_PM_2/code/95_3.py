try:
    def f():
        try:
            res = int(2//1)
            return 40
        except ValueError: return 4
        except KeyboardInterrupt: return 0
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
