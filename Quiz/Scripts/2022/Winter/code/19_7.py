try:
    
    try:
        print(0, end="")
        print(int(3/1), end="")
        print(1, end="")
    except Exception: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
