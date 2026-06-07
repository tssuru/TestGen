try:
    
    try:
        print(5, end="")
        print(int("7"), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
