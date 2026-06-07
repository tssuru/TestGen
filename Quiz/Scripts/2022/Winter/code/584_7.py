try:
    
    try:
        print(0, end="")
        print(int("c7"), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except Exception: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
