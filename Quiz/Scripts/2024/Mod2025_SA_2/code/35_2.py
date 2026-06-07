try:
    a,b,c=4,7,1
    def h(b):
        global c
        a=1
        b*=5
        c=2
        return a+b+c
    
    a,b,c=5,8,9
    print(h(a),a,b,c)
except: print('error')
