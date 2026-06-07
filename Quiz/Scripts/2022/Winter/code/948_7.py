try:
    
    try:
        print(3, end="")
        print(int(0%1), end="")
        print(4, end="")
    except Exception: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
