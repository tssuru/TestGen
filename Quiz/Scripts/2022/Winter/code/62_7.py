try:
    
    try:
        print(5, end="")
        print(int("a7"), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except Exception: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(5, end="")
    
except: print('error')
