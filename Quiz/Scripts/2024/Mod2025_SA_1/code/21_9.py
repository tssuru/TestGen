try:
    a,b,c=7,9,2
    def h(b):
        a=3
        b-=4
        c=5
        return a+b+c
    
    a,b,c=4,0,5
    print(h(a),a,b,c)
except: print('error')
