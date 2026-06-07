try:
    a,b,c=8,5,0
    def h(a):
        global c
        a=5
        b=2
        c=4
        return a+b+c
    
    a,b,c=6,3,7
    print(h(a),a,b,c)
except: print('error')
