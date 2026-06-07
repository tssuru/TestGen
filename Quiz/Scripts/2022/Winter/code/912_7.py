try:
    
    try:
        print(5, end="")
        print(int("7"), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
