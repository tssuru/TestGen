try:
    
    try:
        print(6, end="")
        print(int("d8"), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
