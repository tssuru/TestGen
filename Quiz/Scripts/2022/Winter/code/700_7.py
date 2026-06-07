try:
    
    try:
        print(1, end="")
        print(int("7"), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(3, end="")
    
except: print('error')
