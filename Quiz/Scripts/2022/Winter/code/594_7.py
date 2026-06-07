try:
    
    try:
        print(1, end="")
        print(int(0%1), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except Exception: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
