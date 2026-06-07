try:
    
    try:
        print(6, end="")
        print(int(7//1), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except Exception: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
