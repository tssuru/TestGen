try:
    
    try:
        print(1, end="")
        print(6>=9, end="")
        print(9, end="")
    except ValueError: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(8, end="")
    
except: print('error')
